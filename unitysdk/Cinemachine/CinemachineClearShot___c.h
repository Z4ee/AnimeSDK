#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineClearShot_Pair.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1726E590)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1726E5D0)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET UNITYSDK_OFFSET(0x1726E5E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot___c_TypeDefinitionIndex = 37570;

	class CinemachineClearShot___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Cinemachine::CinemachineClearShot_Pair>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineClearShot_Pair>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x2560);
		}
		static ::Cinemachine::CinemachineClearShot___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineClearShot___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x2568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Randomize_b__47_0(::Cinemachine::CinemachineClearShot_Pair a1, ::Cinemachine::CinemachineClearShot_Pair a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineClearShot_Pair, ::Cinemachine::CinemachineClearShot_Pair))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET))(this, a1, a2);
		}
	};
}
