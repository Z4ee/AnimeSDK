#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_1225;
class Class_0_16E4307DCC419505_759;
namespace RPG::GameCore { class TextDynamicParamBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_82AE29A429A35BD6_METHOD_1_147BB20D21529BBF_OFFSET UNITYSDK_OFFSET(0xA970730)
#define CLASS_1_82AE29A429A35BD6__CCTOR_OFFSET UNITYSDK_OFFSET(0xA970960)

inline static constexpr unsigned int Class_1_82AE29A429A35BD6_TypeDefinitionIndex = 74328;

class Class_1_82AE29A429A35BD6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1225*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_1225*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82AE29A429A35BD6_TypeDefinitionIndex)->GetStaticField(0x684F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82AE29A429A35BD6__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_759* Method_1_147BB20D21529BBF(::RPG::GameCore::TextDynamicParamBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_759*(*)(::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_82AE29A429A35BD6_METHOD_1_147BB20D21529BBF_OFFSET))(a1);
	}
};
