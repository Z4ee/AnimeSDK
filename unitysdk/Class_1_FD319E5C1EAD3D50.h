#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_FD319E5C1EAD3D50_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18BA15E0)
#define CLASS_1_FD319E5C1EAD3D50_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18BA14D0)
#define CLASS_1_FD319E5C1EAD3D50_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x18BA1970)
#define CLASS_1_FD319E5C1EAD3D50_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x18BA1630)
#define CLASS_1_FD319E5C1EAD3D50_METHOD_1_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x18BA1BF0)
#define CLASS_1_FD319E5C1EAD3D50_METHOD_1_E7E04FCBE40013C3_OFFSET UNITYSDK_OFFSET(0x18BA1F50)
#define CLASS_1_FD319E5C1EAD3D50_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x18BA19D0)
#define CLASS_1_FD319E5C1EAD3D50_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18BA1E30)
#define CLASS_1_FD319E5C1EAD3D50__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA11E0)

inline static constexpr unsigned int Class_1_FD319E5C1EAD3D50_TypeDefinitionIndex = 73004;

class Class_1_FD319E5C1EAD3D50 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_1_B4357A1C72BABC6B* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_E7E04FCBE40013C3(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_METHOD_1_E7E04FCBE40013C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_C8EED11299FD17DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD319E5C1EAD3D50_METHOD_1_C8EED11299FD17DB_OFFSET))(this);
	}
};
