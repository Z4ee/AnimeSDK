#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910822CB5E4FEDEB_IntersectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_910822CB5E4FEDEB_CLASS_1_5E2F6DA9758C1430_METHOD_1_172906DB43A92E1C_OFFSET UNITYSDK_OFFSET(0x188A5D40)
#define CLASS_1_910822CB5E4FEDEB_CLASS_1_5E2F6DA9758C1430__CTOR_OFFSET UNITYSDK_OFFSET(0x188A4290)

inline static constexpr unsigned int Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430_TypeDefinitionIndex = 62256;

class Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EPLHAPLELCI; // 0x10
	::UnityEngine::Vector3 ODFBGABAEBM; // 0x18
	::Class_1_910822CB5E4FEDEB_IntersectType GMPGDEINODK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_CLASS_1_5E2F6DA9758C1430__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_172906DB43A92E1C(::Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_910822CB5E4FEDEB_Class_1_5E2F6DA9758C1430*))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB_CLASS_1_5E2F6DA9758C1430_METHOD_1_172906DB43A92E1C_OFFSET))(this, a1);
	}
};
