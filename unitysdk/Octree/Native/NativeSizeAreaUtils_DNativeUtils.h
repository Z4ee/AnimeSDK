#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/Native/SIMD/uint4.h"
#include "unitysdk/System/Object.h"

#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMCOPY_OFFSET UNITYSDK_OFFSET(0x14382A50)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALSFAST_OFFSET UNITYSDK_OFFSET(0x14382E30)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_1_OFFSET UNITYSDK_OFFSET(0x14382BE0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_2_OFFSET UNITYSDK_OFFSET(0x14382C30)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_OFFSET UNITYSDK_OFFSET(0x14382BA0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMISZERO_OFFSET UNITYSDK_OFFSET(0x14382C90)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMSET_OFFSET UNITYSDK_OFFSET(0x14382B40)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14382FB0)
#define OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x14382FA0)

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaUtils_DNativeUtils_TypeDefinitionIndex = 57072;

	class NativeSizeAreaUtils_DNativeUtils : public ::System::Object
	{
	public:
		static ::Octree::Native::SIMD::uint4* StaticGet_s_Uint4Zero()
		{
			return (::Octree::Native::SIMD::uint4*)Il2CppClass::FromTypeDefinitionIndex(NativeSizeAreaUtils_DNativeUtils_TypeDefinitionIndex)->GetStaticField(0xD1B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS__CCTOR_OFFSET))();
		}

		::System::Void PtrMemCopy(::System::Void* inSrc, ::System::Void* inDst, ::System::Int32 srcOffset, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMCOPY_OFFSET))(this, inSrc, inDst, srcOffset, dstOffset, count);
		}

		::System::Void PtrMemSet(::System::Void* inDst, ::System::Int32 dstOffset, ::System::Int32 count, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMSET_OFFSET))(this, inDst, dstOffset, count, value);
		}

		::System::Boolean PtrMemEquals(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_OFFSET))(this, lPtr, rPtr, len);
		}

		::System::Boolean PtrMemEquals_1(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_1_OFFSET))(this, lPtr, rPtr, lOffset, rOffset, len);
		}

		::System::Boolean PtrMemEquals_2(::System::Void* lPtr, ::System::Void* rPtr, ::System::Int32 lOffset, ::System::Int32 rOffset, ::System::Int32 len, ::System::Int32& breakIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALS_2_OFFSET))(this, lPtr, rPtr, lOffset, rOffset, len, breakIdx);
		}

		::System::Boolean PtrMemIsZero(::System::Void* lPtr, ::System::Int32 lOffset, ::System::UInt32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMISZERO_OFFSET))(this, lPtr, lOffset, len);
		}

		::System::Boolean PtrMemEqualsFast(::System::Void* iLPtr, ::System::Void* iRPtr, ::System::UInt32 lOffset, ::System::UInt32 rOffset, ::System::UInt32 len)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAUTILS_DNATIVEUTILS_PTRMEMEQUALSFAST_OFFSET))(this, iLPtr, iRPtr, lOffset, rOffset, len);
		}
	};
}
