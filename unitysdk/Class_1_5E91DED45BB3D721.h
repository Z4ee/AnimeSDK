#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_3.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_143;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E91DED45BB3D721_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16C97360)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x16C97170)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16C97290)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16C972A0)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x16C96EE0)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_8DC662E88975C177_OFFSET UNITYSDK_OFFSET(0x16C97750)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16C97570)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x16C974C0)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C96EC0)
#define CLASS_1_5E91DED45BB3D721_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16C97A10)
#define CLASS_1_5E91DED45BB3D721__CTOR_OFFSET UNITYSDK_OFFSET(0x16C97650)

inline static constexpr unsigned int Class_1_5E91DED45BB3D721_TypeDefinitionIndex = 17852;

class Class_1_5E91DED45BB3D721 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x10
	::Struct_2_41373B0AE65CE02E_3 Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_7; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x38
	::Il2CppArray<::Class_2_208CC9941471731A_143*>* Field_1_0; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_11; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_143* Method_1_8DC662E88975C177(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_143*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_8DC662E88975C177_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E91DED45BB3D721_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
