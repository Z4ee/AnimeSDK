#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_71ECD705C8627A9D_ReferenceSource.h"
#include "unitysdk/Class_2_71ECD705C8627A9D_ReferenceType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_71ECD705C8627A9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B14E60)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_2C1DBB6F6BBBB55F_OFFSET UNITYSDK_OFFSET(0x15B14130)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_366F881BA1E4BE06_OFFSET UNITYSDK_OFFSET(0x15B142C0)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_701C544991C50448_OFFSET UNITYSDK_OFFSET(0x15B13410)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x15B14570)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_912CD6A43BF0D575_OFFSET UNITYSDK_OFFSET(0x15B13720)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_9873EE85585D09C9_OFFSET UNITYSDK_OFFSET(0x15B13950)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_99250689080BB82A_OFFSET UNITYSDK_OFFSET(0x15B139E0)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_A7021190FC73C7FC_OFFSET UNITYSDK_OFFSET(0x15B137A0)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_AAB4AB00F32325E7_OFFSET UNITYSDK_OFFSET(0x15B13A90)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_C2E85A270CC1CF71_OFFSET UNITYSDK_OFFSET(0x15B135A0)
#define CLASS_2_71ECD705C8627A9D_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15B148B0)
#define CLASS_2_71ECD705C8627A9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B15260)
#define CLASS_2_71ECD705C8627A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B149B0)

inline static constexpr unsigned int Class_2_71ECD705C8627A9D_TypeDefinitionIndex = 55195;

class Class_2_71ECD705C8627A9D : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71ECD705C8627A9D_TypeDefinitionIndex)->GetStaticField(0x1BAE0);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GameEntityList*>* Field_2_1; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::StringHash>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::UInt32>* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_3<::RPG::GameCore::StringHash, ::Class_2_71ECD705C8627A9D_ReferenceType, ::Class_2_71ECD705C8627A9D_ReferenceSource>>* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*>* Field_2_5; // 0x38
	::Class_1_1C30CE192ABE4C54* Field_2_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Boolean>* Field_2_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_2_8; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::System::String*>*>* Field_2_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicJsonConfig*>* Field_2_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_701C544991C50448(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_701C544991C50448_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C2E85A270CC1CF71(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_C2E85A270CC1CF71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_912CD6A43BF0D575(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_912CD6A43BF0D575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9873EE85585D09C9(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_9873EE85585D09C9_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_99250689080BB82A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_99250689080BB82A_OFFSET))(a1);
	}

	::System::Void Method_2_AAB4AB00F32325E7(::System::String* a1, ::Class_2_71ECD705C8627A9D_ReferenceType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_71ECD705C8627A9D_ReferenceType))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_AAB4AB00F32325E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7021190FC73C7FC(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_A7021190FC73C7FC_OFFSET))(this, a1, a2);
	}

	static ::System::ValueTuple_2<::Class_2_71ECD705C8627A9D_ReferenceSource, ::System::String*> Method_2_2C1DBB6F6BBBB55F(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::Class_2_71ECD705C8627A9D_ReferenceSource, ::System::String*>(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_2C1DBB6F6BBBB55F_OFFSET))(a1);
	}

	::System::Void Method_2_366F881BA1E4BE06(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_366F881BA1E4BE06_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71ECD705C8627A9D_DISPOSE_OFFSET))(this);
	}
};
