#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_182;
class Class_1_933C07741192A471;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_17;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E23A2D2E72B0716C_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAA6FF30)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAA6FD40)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_ADB7A142D796596C_OFFSET UNITYSDK_OFFSET(0xAA6FC20)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xAA6FD80)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_C2ECD4DEFC38CA09_OFFSET UNITYSDK_OFFSET(0xAA6FCB0)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0xAA70240)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAA704E0)
#define CLASS_1_E23A2D2E72B0716C_TICK_OFFSET UNITYSDK_OFFSET(0xAA70470)
#define CLASS_1_E23A2D2E72B0716C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA6FBC0)

inline static constexpr unsigned int Class_1_E23A2D2E72B0716C_TypeDefinitionIndex = 71232;

class Class_1_E23A2D2E72B0716C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* Field_1_3; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_2; // 0x18
	::Class_1_F9EBB5A401350F78* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_182*>* a2, ::Class_2_6AA7CA7493367EF4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_182*>*, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_ADB7A142D796596C()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_ADB7A142D796596C_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_C2ECD4DEFC38CA09()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_C2ECD4DEFC38CA09_OFFSET))();
	}

	static ::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_BA1BB49741CFDFE1_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D754D5F3490FC4F3(::Class_1_933C07741192A471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_933C07741192A471*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_D754D5F3490FC4F3_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_TICK_OFFSET))(this, a1);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_128774387667156B_OFFSET))();
	}
};
