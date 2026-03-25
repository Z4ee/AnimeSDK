#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineClearShot_Pair.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119A1940)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119A1980)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET UNITYSDK_OFFSET(0x119A1990)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot___c_TypeDefinitionIndex = 30768;

	class CinemachineClearShot___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Cinemachine::CinemachineClearShot_Pair>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineClearShot_Pair>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x31520);
		}
		static ::Cinemachine::CinemachineClearShot___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineClearShot___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x31528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Randomize_b__47_0(::Cinemachine::CinemachineClearShot_Pair p1, ::Cinemachine::CinemachineClearShot_Pair p2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineClearShot_Pair, ::Cinemachine::CinemachineClearShot_Pair))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET))(this, p1, p2);
		}
	};
}
