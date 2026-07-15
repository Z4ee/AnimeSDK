#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76D576E4C3921565;
namespace RPG::GameCore { class ConfigTrainDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_27C97DD54FC313CD_OFFSET UNITYSDK_OFFSET(0x17617920)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x176175D0)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_40FC6B4714090E98_OFFSET UNITYSDK_OFFSET(0x17617A40)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x17617EB0)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17617E00)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x17617620)
#define CLASS_1_FFB8A2463BCB64C3_METHOD_1_B5B5A333663EF42F_OFFSET UNITYSDK_OFFSET(0x17617760)
#define CLASS_1_FFB8A2463BCB64C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17617F60)

inline static constexpr unsigned int Class_1_FFB8A2463BCB64C3_TypeDefinitionIndex = 66086;

class Class_1_FFB8A2463BCB64C3 : public ::System::Object
{
public:
	::RPG::GameCore::ConfigTrainDispatcher* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_76D576E4C3921565*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_76D576E4C3921565*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_B5B5A333663EF42F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_B5B5A333663EF42F_OFFSET))(this, a1);
	}

	::System::Void Method_1_27C97DD54FC313CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_27C97DD54FC313CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_40FC6B4714090E98(::RPG::GameCore::ConfigTrainDispatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigTrainDispatcher*))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_40FC6B4714090E98_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFB8A2463BCB64C3_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
	}
};
