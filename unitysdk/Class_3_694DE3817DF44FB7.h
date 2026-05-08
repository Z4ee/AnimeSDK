#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_A26009A270D71B3D;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_694DE3817DF44FB7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1021CFE0)
#define CLASS_3_694DE3817DF44FB7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1021D240)
#define CLASS_3_694DE3817DF44FB7_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x1021D140)
#define CLASS_3_694DE3817DF44FB7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1021CF60)
#define CLASS_3_694DE3817DF44FB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1021D030)
#define CLASS_3_694DE3817DF44FB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1021D0B0)

inline static constexpr unsigned int Class_3_694DE3817DF44FB7_TypeDefinitionIndex = 69639;

class Class_3_694DE3817DF44FB7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xE; // 0x0
	::System::Action_2<::System::Int32, ::MoleMole::Battle::Entity*>* Field_3_3; // 0x48
	::System::Func_2<::System::Int32, ::Class_1_A26009A270D71B3D*>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>* Field_3_0; // 0x58
	::System::Func_2<::Class_1_A26009A270D71B3D*, ::System::Boolean>* Field_3_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_694DE3817DF44FB7* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_694DE3817DF44FB7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE3817DF44FB7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
