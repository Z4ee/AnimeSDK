#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_32;
class Class_1_F0A446EC7AE7E87D_1;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class IGridFightStageNode; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_789872D6523A4E58_ADD_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x10572980)
#define CLASS_1_789872D6523A4E58_ADD_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x10572B80)
#define CLASS_1_789872D6523A4E58_ADD_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x10572A80)
#define CLASS_1_789872D6523A4E58_METHOD_1_22AF75D955DAE0A8_OFFSET UNITYSDK_OFFSET(0x105739E0)
#define CLASS_1_789872D6523A4E58_METHOD_1_3483A52E3C4FFA50_OFFSET UNITYSDK_OFFSET(0x105735C0)
#define CLASS_1_789872D6523A4E58_METHOD_1_40E8C9A874B9C751_OFFSET UNITYSDK_OFFSET(0x10573690)
#define CLASS_1_789872D6523A4E58_METHOD_1_41170ABB3DAD5E8C_OFFSET UNITYSDK_OFFSET(0x10573430)
#define CLASS_1_789872D6523A4E58_METHOD_1_453F0151859DAB80_OFFSET UNITYSDK_OFFSET(0x105744A0)
#define CLASS_1_789872D6523A4E58_METHOD_1_69831B9F1D1ADD06_OFFSET UNITYSDK_OFFSET(0x10572C80)
#define CLASS_1_789872D6523A4E58_METHOD_1_8F21C8453BEE6BF8_OFFSET UNITYSDK_OFFSET(0x105728E0)
#define CLASS_1_789872D6523A4E58_METHOD_1_91703D6FC1DBB3C9_OFFSET UNITYSDK_OFFSET(0x105734E0)
#define CLASS_1_789872D6523A4E58_METHOD_1_B1784455B27A6ECE_OFFSET UNITYSDK_OFFSET(0x105732F0)
#define CLASS_1_789872D6523A4E58_METHOD_1_C316B6A664F89FE8_OFFSET UNITYSDK_OFFSET(0x10573840)
#define CLASS_1_789872D6523A4E58_METHOD_1_E5BD17A7B7026155_OFFSET UNITYSDK_OFFSET(0x105738C0)
#define CLASS_1_789872D6523A4E58_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10573110)
#define CLASS_1_789872D6523A4E58_METHOD_1_FEECB9D118FB766E_OFFSET UNITYSDK_OFFSET(0x10572F40)
#define CLASS_1_789872D6523A4E58_METHOD_1_FFBDE1E0464AAFC0_OFFSET UNITYSDK_OFFSET(0x10573760)
#define CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x10572A00)
#define CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x10572C00)
#define CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x10572B00)
#define CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_0_OFFSET UNITYSDK_OFFSET(0x10574680)
#define CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_1_OFFSET UNITYSDK_OFFSET(0x105746A0)
#define CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_2_OFFSET UNITYSDK_OFFSET(0x105746C0)
#define CLASS_1_789872D6523A4E58__CTOR_OFFSET UNITYSDK_OFFSET(0x105745C0)

inline static constexpr unsigned int Class_1_789872D6523A4E58_TypeDefinitionIndex = 52807;

class Class_1_789872D6523A4E58 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Field_1_0; // 0x10
	::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierAdd; // 0x18
	::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierRemove; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Field_1_1; // 0x30
	::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierUpdate; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58__CTOR_OFFSET))(this);
	}

	static ::Class_1_789872D6523A4E58* Method_1_8F21C8453BEE6BF8()
	{
		return ((::Class_1_789872D6523A4E58*(*)())((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_8F21C8453BEE6BF8_OFFSET))();
	}

	::System::Void add_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_ADD_ONMODIFIERADD_OFFSET))(this, value);
	}

	::System::Void remove_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERADD_OFFSET))(this, value);
	}

	::System::Void add_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_ADD_ONMODIFIERUPDATE_OFFSET))(this, value);
	}

	::System::Void remove_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERUPDATE_OFFSET))(this, value);
	}

	::System::Void add_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_ADD_ONMODIFIERREMOVE_OFFSET))(this, value);
	}

	::System::Void remove_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_REMOVE_ONMODIFIERREMOVE_OFFSET))(this, value);
	}

	::System::Void Method_1_69831B9F1D1ADD06(::Class_1_E7C4009BCC22497A_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_32*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_69831B9F1D1ADD06_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEECB9D118FB766E(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_FEECB9D118FB766E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1784455B27A6ECE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_B1784455B27A6ECE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_41170ABB3DAD5E8C(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_41170ABB3DAD5E8C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Method_1_91703D6FC1DBB3C9(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_91703D6FC1DBB3C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Method_1_3483A52E3C4FFA50(::System::Type* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_3483A52E3C4FFA50_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* Method_1_40E8C9A874B9C751(::RPG::Client::GridFightModifierEffectType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_40E8C9A874B9C751_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightGameModifier* Method_1_FFBDE1E0464AAFC0(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightGameModifier*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_FFBDE1E0464AAFC0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C316B6A664F89FE8(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_C316B6A664F89FE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5BD17A7B7026155(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_E5BD17A7B7026155_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightNodeType Method_1_22AF75D955DAE0A8(::RPG::Client::IGridFightStageNode* a1)
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID, ::RPG::Client::IGridFightStageNode*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_22AF75D955DAE0A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_453F0151859DAB80(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58_METHOD_1_453F0151859DAB80_OFFSET))(this, a1, a2);
	}

	::System::Void _ApplyModifiers_b__18_0(::RPG::Client::GridFightGameModifier* mod)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_0_OFFSET))(this, mod);
	}

	::System::Void _ApplyModifiers_b__18_1(::RPG::Client::GridFightGameModifier* mod)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_1_OFFSET))(this, mod);
	}

	::System::Void _ApplyModifiers_b__18_2(::RPG::Client::GridFightGameModifier* mod)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58__APPLYMODIFIERS_B__18_2_OFFSET))(this, mod);
	}
};
