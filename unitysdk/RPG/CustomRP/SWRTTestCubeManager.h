#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class SWRTTestCube; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1CC74BF0)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC75470)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CC75280)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CC75400)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC754E0)
#define RPG_CUSTOMRP_SWRTTESTCUBEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC754A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTTestCubeManager_TypeDefinitionIndex = 37874;

	class SWRTTestCubeManager : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::SWRTTestCubeManager** StaticGet_s_Instance()
		{
			return (::RPG::CustomRP::SWRTTestCubeManager**)Il2CppClass::FromTypeDefinitionIndex(SWRTTestCubeManager_TypeDefinitionIndex)->GetStaticField(0x365D0);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::SWRTTestCube*>* _Cubes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER__CCTOR_OFFSET))();
		}

		static ::RPG::CustomRP::SWRTTestCubeManager* get_Instance()
		{
			return ((::RPG::CustomRP::SWRTTestCubeManager*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::RPG::CustomRP::SWRTTestCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::SWRTTestCube*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Unregister(::RPG::CustomRP::SWRTTestCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::SWRTTestCube*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_UNREGISTER_OFFSET))(this, a1);
		}

		::RPG::CustomRP::SWRTTestCube* GetActive()
		{
			return ((::RPG::CustomRP::SWRTTestCube*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTTESTCUBEMANAGER_GETACTIVE_OFFSET))(this);
		}
	};
}
