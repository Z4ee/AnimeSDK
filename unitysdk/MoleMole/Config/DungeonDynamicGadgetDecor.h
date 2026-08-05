#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD68A80)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD68540)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x1BD68F70)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x1BD69020)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1BD690C0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1BD685C0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_472EF15C273678BD_OFFSET UNITYSDK_OFFSET(0x1BD692B0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_581BE9A0EB226E91_OFFSET UNITYSDK_OFFSET(0x1BD69150)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1BD683C0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0x1BD68AE0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1BD68430)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BD68530)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD690B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonDynamicGadgetDecor_TypeDefinitionIndex = 48516;

	class DungeonDynamicGadgetDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 MaxNum; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* LimitedVOIDList; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* LimitedZKRewardIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
		}

		::System::Void Method_2_277F8930086803D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_277F8930086803D1_OFFSET))(this);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DungeonDynamicGadgetDecor* Method_2_581BE9A0EB226E91(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DungeonDynamicGadgetDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_581BE9A0EB226E91_OFFSET))(a1);
		}

		::System::Boolean Method_2_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_72BF6AD1701A5726_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DungeonDynamicGadgetDecor* Method_2_472EF15C273678BD(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DungeonDynamicGadgetDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_METHOD_2_472EF15C273678BD_OFFSET))(a1, a2);
		}
	};
}
