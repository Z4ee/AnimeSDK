#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_648258D77F597F54.h"
#include "unitysdk/Class_2_167CC5FE2F587D46_CustomDataChannel.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_167CC5FE2F587D46_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xC45C3D0)
#define CLASS_2_167CC5FE2F587D46_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC45D1B0)
#define CLASS_2_167CC5FE2F587D46__CTOR_OFFSET UNITYSDK_OFFSET(0xC45D190)

inline static constexpr unsigned int Class_2_167CC5FE2F587D46_TypeDefinitionIndex = 66047;

class Class_2_167CC5FE2F587D46 : public ::Class_1_648258D77F597F54
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_2_1; // 0x38
	::System::String* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_2_3; // 0x48
	::System::Single Field_2_4; // 0x50
	::System::Single Field_2_5; // 0x54
	::System::Single Field_2_6; // 0x58
	::Class_2_167CC5FE2F587D46_CustomDataChannel Field_2_7; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167CC5FE2F587D46__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167CC5FE2F587D46_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167CC5FE2F587D46_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
