#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F48E380)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F48E3C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__41_0_OFFSET UNITYSDK_OFFSET(0x1F48E3D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera___c_TypeDefinitionIndex = 34692;

	class CinemachineVirtualCamera___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineVirtualCamera___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera___c_TypeDefinitionIndex)->GetStaticField(0x28FF0);
		}
		static ::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>** StaticGet___9__41_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera___c_TypeDefinitionIndex)->GetStaticField(0x28FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateComponentPipeline_b__41_0(::Cinemachine::CinemachineComponentBase* c1, ::Cinemachine::CinemachineComponentBase* c2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineComponentBase*, ::Cinemachine::CinemachineComponentBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__41_0_OFFSET))(this, c1, c2);
		}
	};
}
