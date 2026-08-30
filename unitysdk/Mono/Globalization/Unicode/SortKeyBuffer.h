#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class SortKey; }

#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1BB581F0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET UNITYSDK_OFFSET(0x1BB51120)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET UNITYSDK_OFFSET(0x1BB51260)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET UNITYSDK_OFFSET(0x1BB58270)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET UNITYSDK_OFFSET(0x1BB50F90)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BB58B90)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET UNITYSDK_OFFSET(0x1BB508D0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1BB58300)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB4FF70)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1BB581C0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4FF60)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SortKeyBuffer_TypeDefinitionIndex = 44;

	class SortKeyBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* l4sb; // 0x10
		::Il2CppArray<::System::Byte>* l4tb; // 0x18
		::Il2CppArray<::System::Byte>* l3b; // 0x20
		::Il2CppArray<::System::Byte>* l2b; // 0x28
		::System::String* source; // 0x30
		::Il2CppArray<::System::Byte>* l5b; // 0x38
		::Il2CppArray<::System::Byte>* l4kb; // 0x40
		::Il2CppArray<::System::Byte>* l1b; // 0x48
		::Il2CppArray<::System::Byte>* l4wb; // 0x50
		::System::Globalization::CompareOptions options; // 0x58
		::System::Int32 l4t; // 0x5C
		::System::Int32 l1; // 0x60
		::System::Int32 l3; // 0x64
		::System::Boolean processLevel2; // 0x68
		::System::Boolean frenchSorted; // 0x69
		::System::Boolean frenchSort; // 0x6A
		::System::Int32 l4w; // 0x6C
		::System::Int32 l4k; // 0x70
		::System::Int32 l5; // 0x74
		::System::Int32 l2; // 0x78
		::System::Int32 lcid; // 0x7C
		::System::Int32 l4s; // 0x80

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET))(this);
		}

		::System::Void Initialize(::System::Globalization::CompareOptions a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CompareOptions, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AppendCJKExtension(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET))(this, a1, a2);
		}

		::System::Void AppendKana(::System::Byte a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4, ::System::Boolean a5, ::System::Byte a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Boolean, ::System::Byte, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AppendNormal(::System::Byte a1, ::System::Byte a2, ::System::Byte a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AppendLevel5(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET))(this, a1, a2);
		}

		::System::Void AppendBufferPrimitive(::System::Byte a1, ::Il2CppArray<::System::Byte>*& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Globalization::SortKey* GetResultAndReset()
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET))(this);
		}

		::System::Int32 GetOptimizedLength(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Globalization::SortKey* GetResult()
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET))(this);
		}
	};
}
