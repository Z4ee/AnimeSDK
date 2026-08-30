#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleLogModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9932FEBB1963406E_METHOD_1_25314EC055B41E66_OFFSET UNITYSDK_OFFSET(0x18747F10)
#define CLASS_1_9932FEBB1963406E_METHOD_1_31D9A4F65C96A044_OFFSET UNITYSDK_OFFSET(0x18747D10)
#define CLASS_1_9932FEBB1963406E_METHOD_1_7C41732AE6EF1E32_OFFSET UNITYSDK_OFFSET(0x18747C70)
#define CLASS_1_9932FEBB1963406E_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x187472E0)
#define CLASS_1_9932FEBB1963406E_METHOD_1_B54048B6E2C730F1_OFFSET UNITYSDK_OFFSET(0x187478E0)
#define CLASS_1_9932FEBB1963406E_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x18747240)
#define CLASS_1_9932FEBB1963406E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18748340)
#define CLASS_1_9932FEBB1963406E_METHOD_1_FD7E607E18CD2575_OFFSET UNITYSDK_OFFSET(0x18747370)
#define CLASS_1_9932FEBB1963406E__CTOR_OFFSET UNITYSDK_OFFSET(0x187472D0)

inline static constexpr unsigned int Class_1_9932FEBB1963406E_TypeDefinitionIndex = 61056;

class Class_1_9932FEBB1963406E : public ::System::Object
{
public:
	static ::Class_1_9932FEBB1963406E** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_9932FEBB1963406E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9932FEBB1963406E_TypeDefinitionIndex)->GetStaticField(0x20B90);
	}
	// static const ::System::String* FMNFMDOCKBO; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E__CTOR_OFFSET))(this);
	}

	static ::Class_1_9932FEBB1963406E* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_9932FEBB1963406E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	::System::Void Method_1_FD7E607E18CD2575(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_FD7E607E18CD2575_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BattleLogModel* Method_1_B54048B6E2C730F1()
	{
		return ((::RPG::Client::BattleLogModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_B54048B6E2C730F1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_7C41732AE6EF1E32(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_7C41732AE6EF1E32_OFFSET))(this, a1);
	}

	::System::String* Method_1_31D9A4F65C96A044(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_31D9A4F65C96A044_OFFSET))(this, a1);
	}

	::System::Void Method_1_25314EC055B41E66(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_25314EC055B41E66_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9932FEBB1963406E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
