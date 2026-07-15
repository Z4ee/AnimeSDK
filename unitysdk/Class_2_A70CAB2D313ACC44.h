#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F1011C1DB6F9F51A;
class Class_2_C23DD4758FBF845D;
namespace RPG::Client { class SPProgress; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A70CAB2D313ACC44_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16A22F00)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x16A22E50)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16A23360)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x16A23040)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16A22DF0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x16A232B0)
#define CLASS_2_A70CAB2D313ACC44_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16A23210)
#define CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET UNITYSDK_OFFSET(0x16A233B0)
#define CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET UNITYSDK_OFFSET(0x16A22B30)

inline static constexpr unsigned int Class_2_A70CAB2D313ACC44_TypeDefinitionIndex = 68607;

class Class_2_A70CAB2D313ACC44 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::Class_2_C23DD4758FBF845D*>* Field_2_2; // 0x70
	::Class_1_F1011C1DB6F9F51A* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::RPG::Client::SPProgress* Field_2_5; // 0x88
	::System::Boolean Field_2_6; // 0x90
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A70CAB2D313ACC44_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}
};
