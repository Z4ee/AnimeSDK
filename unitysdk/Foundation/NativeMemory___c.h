#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryAllocation.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_NATIVEMEMORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F79F360)
#define FOUNDATION_NATIVEMEMORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F79F3A0)
#define FOUNDATION_NATIVEMEMORY___C___CCTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F79F3B0)
#define FOUNDATION_NATIVEMEMORY___C___CCTOR_B__16_1_OFFSET UNITYSDK_OFFSET(0x1F79F3D0)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemory___c_TypeDefinitionIndex = 8623;

	class NativeMemory___c : public ::System::Object
	{
	public:
		static ::Foundation::NativeMemory___c** StaticGet___9()
		{
			return (::Foundation::NativeMemory___c**)Il2CppClass::FromTypeDefinitionIndex(NativeMemory___c_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__16_0(::Foundation::NativeMemoryAllocation a, ::Foundation::NativeMemoryAllocation b)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::NativeMemoryAllocation, ::Foundation::NativeMemoryAllocation))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY___C___CCTOR_B__16_0_OFFSET))(this, a, b);
		}

		::System::Int32 __cctor_b__16_1(::Foundation::NativeMemoryRequest a, ::Foundation::NativeMemoryRequest b)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::NativeMemoryRequest, ::Foundation::NativeMemoryRequest))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY___C___CCTOR_B__16_1_OFFSET))(this, a, b);
		}
	};
}
