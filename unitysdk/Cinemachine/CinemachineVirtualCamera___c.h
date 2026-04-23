#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BA4B50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA4B80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__46_0_OFFSET UNITYSDK_OFFSET(0x12BA4B90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera___c_TypeDefinitionIndex = 36530;

	class CinemachineVirtualCamera___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineVirtualCamera___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera___c_TypeDefinitionIndex)->GetStaticField(0x8330);
		}
		static ::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>** StaticGet___9__46_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera___c_TypeDefinitionIndex)->GetStaticField(0x8338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateComponentPipeline_b__46_0(::Cinemachine::CinemachineComponentBase* c1, ::Cinemachine::CinemachineComponentBase* c2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineComponentBase*, ::Cinemachine::CinemachineComponentBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__46_0_OFFSET))(this, c1, c2);
		}
	};
}
