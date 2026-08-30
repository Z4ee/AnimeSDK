#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_403;
namespace Sofa { class BaseSofaControl; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_534BBA4C76709F67;

#define CLASS_1_3185B7D04F177583_METHOD_1_51BCEF392866034D_OFFSET UNITYSDK_OFFSET(0x15211DC0)
#define CLASS_1_3185B7D04F177583_METHOD_1_867594D5D9EB1E10_OFFSET UNITYSDK_OFFSET(0x15211F50)
#define CLASS_1_3185B7D04F177583_METHOD_1_8DA9F1C7186F84B3_OFFSET UNITYSDK_OFFSET(0x15212070)
#define CLASS_1_3185B7D04F177583_METHOD_1_C6C47C9FFA92653C_1_OFFSET UNITYSDK_OFFSET(0x15211EB0)
#define CLASS_1_3185B7D04F177583_METHOD_1_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0x15211E10)
#define CLASS_1_3185B7D04F177583__CTOR_OFFSET UNITYSDK_OFFSET(0x15211DB0)

inline static constexpr unsigned int Class_1_3185B7D04F177583_TypeDefinitionIndex = 50115;

class Class_1_3185B7D04F177583 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_403* CFKHNPGEAJA; // 0x10
	::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* GFFAGJOELCH; // 0x18
	::System::Action_1<::Sofa::BaseSofaControl*>* DLLGEJMHAPN; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_403* a1, ::System::Action_1<::Sofa::BaseSofaControl*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*, ::System::Action_1<::Sofa::BaseSofaControl*>*))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>* Method_1_51BCEF392866034D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583_METHOD_1_51BCEF392866034D_OFFSET))(this);
	}

	::System::Void Method_1_C6C47C9FFA92653C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583_METHOD_1_C6C47C9FFA92653C_OFFSET))(this);
	}

	::System::Void Method_1_C6C47C9FFA92653C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583_METHOD_1_C6C47C9FFA92653C_1_OFFSET))(this);
	}

	::System::Void Method_1_867594D5D9EB1E10(::Sofa::BaseSofaControl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583_METHOD_1_867594D5D9EB1E10_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA9F1C7186F84B3(::Sofa::BaseSofaControl* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3185B7D04F177583_METHOD_1_8DA9F1C7186F84B3_OFFSET))(this, a1, a2);
	}
};
