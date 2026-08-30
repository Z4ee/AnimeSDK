#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_7807B2B04302CD7B_33;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET UNITYSDK_OFFSET(0x16C952C0)
#define CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16C953F0)
#define CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET UNITYSDK_OFFSET(0x16C95150)

inline static constexpr unsigned int Class_2_2DB5DEF3EA4B57A8_TypeDefinitionIndex = 71156;

class Class_2_2DB5DEF3EA4B57A8 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Text* JKOMLECEPJL; // 0x60
	::UnityEngine::Transform* MGCMKLNGPOF; // 0x68
	::UnityEngine::UI::Text* DKPGGBHIKII; // 0x70
	::UnityEngine::Transform* EFNNMOKGGEB; // 0x78
	::UnityEngine::UI::Text* AEJPECICBGN; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_446D667A20507CA9(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_33*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_33*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DB5DEF3EA4B57A8_METHOD_2_446D667A20507CA9_OFFSET))(this, a1, a2);
	}
};
