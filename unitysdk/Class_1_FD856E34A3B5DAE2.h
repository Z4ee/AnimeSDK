#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD856E34A3B5DAE2_Struct_2_BBD456EBC9087BC2_8.h"
#include "unitysdk/System/Object.h"

class Class_1_BDE920ECA71E279C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD856E34A3B5DAE2_METHOD_1_608A80146C4FF3CD_OFFSET UNITYSDK_OFFSET(0xAA062A0)
#define CLASS_1_FD856E34A3B5DAE2_METHOD_1_71362B53164B8F96_OFFSET UNITYSDK_OFFSET(0xAA05E60)
#define CLASS_1_FD856E34A3B5DAE2_METHOD_1_9F4EF10E43CEE331_OFFSET UNITYSDK_OFFSET(0xAA05DB0)
#define CLASS_1_FD856E34A3B5DAE2_METHOD_1_E563964C7861920D_OFFSET UNITYSDK_OFFSET(0xAA064A0)
#define CLASS_1_FD856E34A3B5DAE2_METHOD_1_F433A0749000FB87_OFFSET UNITYSDK_OFFSET(0xAA05CB0)
#define CLASS_1_FD856E34A3B5DAE2__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA066A0)

inline static constexpr unsigned int Class_1_FD856E34A3B5DAE2_TypeDefinitionIndex = 73096;

class Class_1_FD856E34A3B5DAE2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_FD856E34A3B5DAE2_Struct_2_BBD456EBC9087BC2_8>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_FD856E34A3B5DAE2_Struct_2_BBD456EBC9087BC2_8>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD856E34A3B5DAE2_TypeDefinitionIndex)->GetStaticField(0x68820);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD856E34A3B5DAE2_TypeDefinitionIndex)->GetStaticField(0x68828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F433A0749000FB87(::RPG::GameCore::GameEntity* a1, ::Class_1_FD856E34A3B5DAE2_Struct_2_BBD456EBC9087BC2_8 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Class_1_FD856E34A3B5DAE2_Struct_2_BBD456EBC9087BC2_8))((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2_METHOD_1_F433A0749000FB87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F4EF10E43CEE331(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2_METHOD_1_9F4EF10E43CEE331_OFFSET))(a1);
	}

	static ::Class_1_BDE920ECA71E279C* Method_1_71362B53164B8F96(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_BDE920ECA71E279C*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2_METHOD_1_71362B53164B8F96_OFFSET))(a1, a2);
	}

	static ::Class_1_BDE920ECA71E279C* Method_1_608A80146C4FF3CD(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_BDE920ECA71E279C*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2_METHOD_1_608A80146C4FF3CD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E563964C7861920D(::Class_1_BDE920ECA71E279C* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::Class_1_BDE920ECA71E279C*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD856E34A3B5DAE2_METHOD_1_E563964C7861920D_OFFSET))(a1, a2);
	}
};
