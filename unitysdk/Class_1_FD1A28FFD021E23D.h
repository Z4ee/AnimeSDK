#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_02B0702160B61CDD.h"
#include "unitysdk/Struct_2_5D069F19E41FF0CC.h"
#include "unitysdk/Struct_2_77ED6AE6421E24B7.h"
#include "unitysdk/Struct_2_949560F8E2E2D60D.h"
#include "unitysdk/Struct_2_ECA2CA7916C434B8.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD1A28FFD021E23D_METHOD_1_7B4A978C9940E626_OFFSET UNITYSDK_OFFSET(0x108D7E70)
#define CLASS_1_FD1A28FFD021E23D_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x108D77D0)
#define CLASS_1_FD1A28FFD021E23D_METHOD_1_D9910045757586F0_OFFSET UNITYSDK_OFFSET(0x108D7870)
#define CLASS_1_FD1A28FFD021E23D__CTOR_OFFSET UNITYSDK_OFFSET(0x108D83C0)

inline static constexpr unsigned int Class_1_FD1A28FFD021E23D_TypeDefinitionIndex = 45118;

class Class_1_FD1A28FFD021E23D : public ::System::Object
{
public:
	::Struct_2_5D069F19E41FF0CC Field_1_4; // 0x10
	::System::String* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_949560F8E2E2D60D>* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x38
	::Struct_2_02B0702160B61CDD Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_ECA2CA7916C434B8>* Field_1_1; // 0x48
	::Struct_2_77ED6AE6421E24B7 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD1A28FFD021E23D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_FD1A28FFD021E23D_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_7B4A978C9940E626()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD1A28FFD021E23D_METHOD_1_7B4A978C9940E626_OFFSET))(this);
	}

	::System::Boolean Method_1_D9910045757586F0(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_FD1A28FFD021E23D_METHOD_1_D9910045757586F0_OFFSET))(this, a1);
	}
};
