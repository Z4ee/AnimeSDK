#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class SortKey; }

#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1C30A8F0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET UNITYSDK_OFFSET(0x1C30A860)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET UNITYSDK_OFFSET(0x1C30A9A0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET UNITYSDK_OFFSET(0x1C30ABF0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET UNITYSDK_OFFSET(0x1C30AA60)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C30B610)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET UNITYSDK_OFFSET(0x1C30AC90)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C30ACD0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C30A6B0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1C30A680)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30A670)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SortKeyBuffer_TypeDefinitionIndex = 47;

	class SortKeyBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* l5b; // 0x10
		::Il2CppArray<::System::Byte>* l2b; // 0x18
		::Il2CppArray<::System::Byte>* l3b; // 0x20
		::Il2CppArray<::System::Byte>* l4sb; // 0x28
		::Il2CppArray<::System::Byte>* l4wb; // 0x30
		::Il2CppArray<::System::Byte>* l4kb; // 0x38
		::Il2CppArray<::System::Byte>* l4tb; // 0x40
		::Il2CppArray<::System::Byte>* l1b; // 0x48
		::System::String* source; // 0x50
		::System::Int32 lcid; // 0x58
		::System::Int32 l1; // 0x5C
		::System::Int32 l3; // 0x60
		::System::Int32 l2; // 0x64
		::System::Int32 l4s; // 0x68
		::System::Int32 l4k; // 0x6C
		::System::Globalization::CompareOptions options; // 0x70
		::System::Int32 l5; // 0x74
		::System::Int32 l4t; // 0x78
		::System::Boolean frenchSorted; // 0x7C
		::System::Boolean processLevel2; // 0x7D
		::System::Boolean frenchSort; // 0x7E
		::System::Int32 l4w; // 0x80

		::System::Void _ctor(::System::Int32 lcid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER__CTOR_OFFSET))(this, lcid);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET))(this);
		}

		::System::Void Initialize(::System::Globalization::CompareOptions options, ::System::Int32 lcid, ::System::String* s, ::System::Boolean frenchSort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CompareOptions, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET))(this, options, lcid, s, frenchSort);
		}

		::System::Void AppendCJKExtension(::System::Byte lv1msb, ::System::Byte lv1lsb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET))(this, lv1msb, lv1lsb);
		}

		::System::Void AppendKana(::System::Byte category, ::System::Byte lv1, ::System::Byte lv2, ::System::Byte lv3, ::System::Boolean isSmallKana, ::System::Byte markType, ::System::Boolean isKatakana, ::System::Boolean isHalfWidth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Boolean, ::System::Byte, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET))(this, category, lv1, lv2, lv3, isSmallKana, markType, isKatakana, isHalfWidth);
		}

		::System::Void AppendNormal(::System::Byte category, ::System::Byte lv1, ::System::Byte lv2, ::System::Byte lv3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET))(this, category, lv1, lv2, lv3);
		}

		::System::Void AppendLevel5(::System::Byte category, ::System::Byte lv1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET))(this, category, lv1);
		}

		::System::Void AppendBufferPrimitive(::System::Byte value, ::Il2CppArray<::System::Byte>*& buf, ::System::Int32& bidx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET))(this, value, buf, bidx);
		}

		::System::Globalization::SortKey* GetResultAndReset()
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET))(this);
		}

		::System::Int32 GetOptimizedLength(::Il2CppArray<::System::Byte>* data, ::System::Int32 len, ::System::Byte defaultValue)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET))(this, data, len, defaultValue);
		}

		::System::Globalization::SortKey* GetResult()
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET))(this);
		}
	};
}
