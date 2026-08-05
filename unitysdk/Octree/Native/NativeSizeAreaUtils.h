#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/Native/DNativeSizeAreaNode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENTPTR_OFFSET UNITYSDK_OFFSET(0x18B18490)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENT_OFFSET UNITYSDK_OFFSET(0x18B18480)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMCOPY_OFFSET UNITYSDK_OFFSET(0x18B184A0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALSFAST_OFFSET UNITYSDK_OFFSET(0x18B189B0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_1_OFFSET UNITYSDK_OFFSET(0x18B18810)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_2_OFFSET UNITYSDK_OFFSET(0x18B188E0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_OFFSET UNITYSDK_OFFSET(0x18B18750)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMSET_OFFSET UNITYSDK_OFFSET(0x18B18610)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READBYTEBE_OFFSET UNITYSDK_OFFSET(0x18B18340)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READINTBE_OFFSET UNITYSDK_OFFSET(0x18B182E0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_READSHORTBE_OFFSET UNITYSDK_OFFSET(0x18B18310)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_TOHEX_OFFSET UNITYSDK_OFFSET(0x18B18360)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEBYTEBE_OFFSET UNITYSDK_OFFSET(0x18B18350)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEINTBE_OFFSET UNITYSDK_OFFSET(0x18B182F0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITESHORTBE_OFFSET UNITYSDK_OFFSET(0x18B18330)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B18BB0)

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaUtils_TypeDefinitionIndex = 51019;

	class NativeSizeAreaUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 ReadIntBE(::System::Void* ptr, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READINTBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteIntBE(::System::Void* ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEINTBE_OFFSET))(ptr, value, index);
		}

		static ::System::Int16 ReadShortBE(::System::Void* ptr, ::System::Int32 index)
		{
			return ((::System::Int16(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READSHORTBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteShortBE(::System::Void* ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITESHORTBE_OFFSET))(ptr, value, index);
		}

		static ::System::Int32 ReadByteBE(::System::Void* ptr, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_READBYTEBE_OFFSET))(ptr, index);
		}

		static ::System::Void WriteByteBE(::System::Void* ptr, ::System::Int32 value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_WRITEBYTEBE_OFFSET))(ptr, value, index);
		}

		static ::System::String* ToHex(::System::Void* input, ::System::Int32 iStart, ::System::Int32 len)
		{
			return ((::System::String*(*)(::System::Void*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_TOHEX_OFFSET))(input, iStart, len);
		}

		static ::Octree::Native::DNativeSizeAreaNode& AsNodeElement(::System::Void* source, ::System::Int32 offset)
		{
			return ((::Octree::Native::DNativeSizeAreaNode&(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENT_OFFSET))(source, offset);
		}

		static ::Octree::Native::DNativeSizeAreaNode* AsNodeElementPtr(::System::Void* source, ::System::Int32 offset)
		{
			return ((::Octree::Native::DNativeSizeAreaNode*(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_ASNODEELEMENTPTR_OFFSET))(source, offset);
		}

		static ::System::Void PtrMemCopy(::System::Void* inSrc, ::System::Void* inDst, ::System::Int32 srcOffset, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMCOPY_OFFSET))(inSrc, inDst, srcOffset, dstOffset, count);
		}

		static ::System::Void PtrMemSet(::System::Void* inDst, ::System::Int32 dstOffset, ::System::Int32 count, ::System::Byte value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMSET_OFFSET))(inDst, dstOffset, count, value);
		}

		static ::System::Boolean PtrMemEquals(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_OFFSET))(lPtr, rPtr, len);
		}

		static ::System::Boolean PtrMemEquals_1(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_1_OFFSET))(lPtr, rPtr, lOffset, rOffset, len);
		}

		static ::System::Boolean PtrMemEquals_2(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len, ::System::Int32& breakIdx)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALS_2_OFFSET))(lPtr, rPtr, lOffset, rOffset, len, breakIdx);
		}

		static ::System::Boolean PtrMemEqualsFast(::System::Void* iLPtr, ::System::Void* iRPtr, ::System::UInt32 lOffset, ::System::UInt32 rOffset, ::System::UInt32 len)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_PTRMEMEQUALSFAST_OFFSET))(iLPtr, iRPtr, lOffset, rOffset, len);
		}
	};
}
