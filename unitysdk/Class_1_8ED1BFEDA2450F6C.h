#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnPreloadOperationDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x123FDD40)
#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_4BCD22A6B8558067_OFFSET UNITYSDK_OFFSET(0x123FDBA0)
#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_839199B1F2A0F9A1_OFFSET UNITYSDK_OFFSET(0x123FDDE0)
#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_9E4AEA2423BD95F5_OFFSET UNITYSDK_OFFSET(0x123FE3E0)
#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x123FE5F0)
#define CLASS_1_8ED1BFEDA2450F6C_METHOD_1_E0D33DAB45759914_OFFSET UNITYSDK_OFFSET(0x123FE0C0)
#define CLASS_1_8ED1BFEDA2450F6C__CTOR_OFFSET UNITYSDK_OFFSET(0x123FDA90)

inline static constexpr unsigned int Class_1_8ED1BFEDA2450F6C_TypeDefinitionIndex = 55057;

class Class_1_8ED1BFEDA2450F6C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BCD22A6B8558067(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_4BCD22A6B8558067_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_839199B1F2A0F9A1(::System::Boolean a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_839199B1F2A0F9A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0D33DAB45759914(::RPG::Client::OnPreloadOperationDelegate* a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OnPreloadOperationDelegate*, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_E0D33DAB45759914_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E4AEA2423BD95F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_9E4AEA2423BD95F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}
};
