#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_F91ACF27C085FD90;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x16AA3500)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA2EE0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AA28C0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0810F24E81A49D5E_OFFSET UNITYSDK_OFFSET(0x16AA4340)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x16AA2630)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x16AA4480)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2E626C11CDAF4187_OFFSET UNITYSDK_OFFSET(0x16AA2F40)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x16AA4510)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0x16AA33C0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x16AA2940)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x16AA2620)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A596B5E16BFC5DB7_OFFSET UNITYSDK_OFFSET(0x16AA3590)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16AA2720)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_D2654D6E022606CA_OFFSET UNITYSDK_OFFSET(0x16AA41A0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x16AA2790)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA4190)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FollowAvatarTrait_TypeDefinitionIndex = 56880;

	class FollowAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SummonRobotID; // 0x18
		::System::Int32 AI_ID; // 0x1C
		::MoleMole::Config::CampType Camp; // 0x20
		::System::Boolean AdaptWorldLevel; // 0x24
		::Class_1_5FA9CCDDD9957726* _config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a2)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET))(this, a1, a2);
		}

		::MoleMole::EntityHandle Method_2_A596B5E16BFC5DB7(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a2)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A596B5E16BFC5DB7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_D2654D6E022606CA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_D2654D6E022606CA_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_0810F24E81A49D5E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0810F24E81A49D5E_OFFSET))(a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2E626C11CDAF4187(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2E626C11CDAF4187_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}
	};
}
