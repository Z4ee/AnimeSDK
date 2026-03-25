#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleLogModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CF835A0D0D90B72_METHOD_1_7C41732AE6EF1E32_OFFSET UNITYSDK_OFFSET(0x10AE3BE0)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x10AE3EA0)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x10AE3280)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_B54048B6E2C730F1_OFFSET UNITYSDK_OFFSET(0x10AE3850)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_B68520715227D3F2_OFFSET UNITYSDK_OFFSET(0x10AE3C80)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_C2CA0E69270E3D45_OFFSET UNITYSDK_OFFSET(0x10AE3310)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x10AE31E0)
#define CLASS_1_1CF835A0D0D90B72_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10AE40C0)
#define CLASS_1_1CF835A0D0D90B72__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE3270)

inline static constexpr unsigned int Class_1_1CF835A0D0D90B72_TypeDefinitionIndex = 49423;

class Class_1_1CF835A0D0D90B72 : public ::System::Object
{
public:
	static ::Class_1_1CF835A0D0D90B72** StaticGet_Field_1_1()
	{
		return (::Class_1_1CF835A0D0D90B72**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CF835A0D0D90B72_TypeDefinitionIndex)->GetStaticField(0x46AC0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72__CTOR_OFFSET))(this);
	}

	static ::Class_1_1CF835A0D0D90B72* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_1CF835A0D0D90B72*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	::System::Void Method_1_C2CA0E69270E3D45(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_C2CA0E69270E3D45_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BattleLogModel* Method_1_B54048B6E2C730F1()
	{
		return ((::RPG::Client::BattleLogModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_B54048B6E2C730F1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_7C41732AE6EF1E32(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_7C41732AE6EF1E32_OFFSET))(this, a1);
	}

	::System::String* Method_1_B68520715227D3F2(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_B68520715227D3F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF835A0D0D90B72_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
