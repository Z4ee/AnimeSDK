#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916A609943E0EE80_2;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_19DB14C0C5CFE108___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB467420)
#define CLASS_1_19DB14C0C5CFE108___C__CHECKHASAVATARCONFLICT_B__5_0_OFFSET UNITYSDK_OFFSET(0xB467470)
#define CLASS_1_19DB14C0C5CFE108___C__CHECKHASAVATARCONFLICT_B__5_1_OFFSET UNITYSDK_OFFSET(0xB467480)
#define CLASS_1_19DB14C0C5CFE108___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB467460)
#define CLASS_1_19DB14C0C5CFE108___C___CONFIRMEQUIPMENTCONFLICTCLEAR_B__8_0_OFFSET UNITYSDK_OFFSET(0xB467570)
#define CLASS_1_19DB14C0C5CFE108___C___FILLCONFLICTSTAGEINDICESTO_B__12_0_OFFSET UNITYSDK_OFFSET(0xB4675C0)
#define CLASS_1_19DB14C0C5CFE108___C___FILLCONFLICTSTAGEINDICESTO_B__12_2_OFFSET UNITYSDK_OFFSET(0xB4675D0)

inline static constexpr unsigned int Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex = 80182;

class Class_1_19DB14C0C5CFE108___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::Class_1_916A609943E0EE80_2*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::Class_1_916A609943E0EE80_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x40F0);
	}
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x40F8);
	}
	static ::Class_1_19DB14C0C5CFE108___c** StaticGet___9()
	{
		return (::Class_1_19DB14C0C5CFE108___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x4100);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x4108);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__12_2()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x4110);
	}
	static ::System::Func_2<::Class_1_916A609943E0EE80_2*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_916A609943E0EE80_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19DB14C0C5CFE108___c_TypeDefinitionIndex)->GetStaticField(0x4118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _CheckHasAvatarConflict_b__5_0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__CHECKHASAVATARCONFLICT_B__5_0_OFFSET))(this, a1);
	}

	::Class_1_916A609943E0EE80_2* _CheckHasAvatarConflict_b__5_1(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_1_916A609943E0EE80_2*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__CHECKHASAVATARCONFLICT_B__5_1_OFFSET))(this, a1);
	}

	::System::String* __ConfirmEquipmentConflictClear_b__8_0(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C___CONFIRMEQUIPMENTCONFLICTCLEAR_B__8_0_OFFSET))(this, a1);
	}

	::System::Boolean __FillConflictStageIndicesTo_b__12_0(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C___FILLCONFLICTSTAGEINDICESTO_B__12_0_OFFSET))(this, a1);
	}

	::System::Boolean __FillConflictStageIndicesTo_b__12_2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C___FILLCONFLICTSTAGEINDICESTO_B__12_2_OFFSET))(this, a1);
	}
};
