#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x12406DC0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12406900)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12406550)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1B25CA91E83A54E1_OFFSET UNITYSDK_OFFSET(0x12408100)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x124062F0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1FAC9B543EF43496_OFFSET UNITYSDK_OFFSET(0x12406960)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x12408070)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x12407F20)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0x12406CA0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x124065D0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x124062E0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_BF684D6BDEEDE58F_OFFSET UNITYSDK_OFFSET(0x12407F30)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x124063E0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x12406450)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12407F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbyssS2ExhibitAvatarTrait_TypeDefinitionIndex = 53254;

	class AbyssS2ExhibitAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PlayerOrder; // 0x18
		::System::Boolean IsNeedWeapon; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a2)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_BUILDENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1FAC9B543EF43496(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1FAC9B543EF43496_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbyssS2ExhibitAvatarTrait* Method_2_BF684D6BDEEDE58F(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AbyssS2ExhibitAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_BF684D6BDEEDE58F_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbyssS2ExhibitAvatarTrait* Method_2_1B25CA91E83A54E1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AbyssS2ExhibitAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_METHOD_2_1B25CA91E83A54E1_OFFSET))(a1, a2);
		}
	};
}
