#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1322;
class Class_0_16E4307DCC419505_1329;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8BDCC73A44ACE6FC_METHOD_1_9A9313238937A7CE_OFFSET UNITYSDK_OFFSET(0x18459980)
#define CLASS_1_8BDCC73A44ACE6FC_METHOD_1_DC41317B0DC73C09_OFFSET UNITYSDK_OFFSET(0x18459F00)
#define CLASS_1_8BDCC73A44ACE6FC_METHOD_1_DC895FA58D58405E_OFFSET UNITYSDK_OFFSET(0x18459E70)
#define CLASS_1_8BDCC73A44ACE6FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1845A4B0)

inline static constexpr unsigned int Class_1_8BDCC73A44ACE6FC_TypeDefinitionIndex = 78696;

class Class_1_8BDCC73A44ACE6FC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1322*>* EEMPAAFDLAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDCC73A44ACE6FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A9313238937A7CE(::Class_0_16E4307DCC419505_1322* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1322*))((::PBYTE)hIl2Cpp + CLASS_1_8BDCC73A44ACE6FC_METHOD_1_9A9313238937A7CE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1329* Method_1_DC895FA58D58405E()
	{
		return ((::Class_0_16E4307DCC419505_1329*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDCC73A44ACE6FC_METHOD_1_DC895FA58D58405E_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1322*>* Method_1_DC41317B0DC73C09(::Il2CppArray<::Class_0_16E4307DCC419505_1322*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1322*>*(*)(::Il2CppArray<::Class_0_16E4307DCC419505_1322*>*))((::PBYTE)hIl2Cpp + CLASS_1_8BDCC73A44ACE6FC_METHOD_1_DC41317B0DC73C09_OFFSET))(a1);
	}
};
