#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_199;
class Class_1_933C07741192A471;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E23A2D2E72B0716C_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17320310)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17320120)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_165125547C288B47_OFFSET UNITYSDK_OFFSET(0x17320090)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_513D34FAFFB1AAB4_OFFSET UNITYSDK_OFFSET(0x17320000)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_B6009F06FE6FBDA6_OFFSET UNITYSDK_OFFSET(0x173206B0)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x17320160)
#define CLASS_1_E23A2D2E72B0716C_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17320A20)
#define CLASS_1_E23A2D2E72B0716C_TICK_OFFSET UNITYSDK_OFFSET(0x173209B0)
#define CLASS_1_E23A2D2E72B0716C__CTOR_OFFSET UNITYSDK_OFFSET(0x1731FFA0)

inline static constexpr unsigned int Class_1_E23A2D2E72B0716C_TypeDefinitionIndex = 73695;

class Class_1_E23A2D2E72B0716C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>* Field_1_2; // 0x18
	::Class_1_E518B582305CCAFF* Field_1_3; // 0x20

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_199*>* a2, ::Class_2_FB9CF047C8AEAA83* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_199*>*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_513D34FAFFB1AAB4()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_513D34FAFFB1AAB4_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelNodeContainer* Method_1_165125547C288B47()
	{
		return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_165125547C288B47_OFFSET))();
	}

	static ::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_BA1BB49741CFDFE1_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6009F06FE6FBDA6(::Class_1_933C07741192A471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_933C07741192A471*))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_B6009F06FE6FBDA6_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_TICK_OFFSET))(this, a1);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C_METHOD_1_128774387667156B_OFFSET))();
	}
};
