#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_7807B2B04302CD7B_29;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_354AD1D19898E348_METHOD_2_4A221FDDE88134CA_OFFSET UNITYSDK_OFFSET(0x9516360)
#define CLASS_2_354AD1D19898E348__CTOR_OFFSET UNITYSDK_OFFSET(0x9516490)
#define CLASS_2_354AD1D19898E348__ONBIND_OFFSET UNITYSDK_OFFSET(0x95161F0)
#define CLASS_2_354AD1D19898E348___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x95164C0)

inline static constexpr unsigned int Class_2_354AD1D19898E348_TypeDefinitionIndex = 65613;

class Class_2_354AD1D19898E348 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::UI::Text* Field_2_0; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_354AD1D19898E348__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_354AD1D19898E348__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4A221FDDE88134CA(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_354AD1D19898E348_METHOD_2_4A221FDDE88134CA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_354AD1D19898E348___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
