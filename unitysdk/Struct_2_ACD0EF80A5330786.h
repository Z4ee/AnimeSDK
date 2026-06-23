#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_172EDDF213DEFCC4.h"
#include "unitysdk/Struct_2_E521CB413C09680F.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_ACD0EF80A5330786_METHOD_2_5394145894BDC459_OFFSET UNITYSDK_OFFSET(0x7957F0)
#define STRUCT_2_ACD0EF80A5330786_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x795870)
#define STRUCT_2_ACD0EF80A5330786__CCTOR_OFFSET UNITYSDK_OFFSET(0x127FBFA0)
#define STRUCT_2_ACD0EF80A5330786__CTOR_OFFSET UNITYSDK_OFFSET(0x795770)

inline static constexpr unsigned int Struct_2_ACD0EF80A5330786_TypeDefinitionIndex = 64951;

struct alignas(8) Struct_2_ACD0EF80A5330786
{
	static ::Struct_2_ACD0EF80A5330786* StaticGet_Field_2_3()
	{
		return (::Struct_2_ACD0EF80A5330786*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_ACD0EF80A5330786_TypeDefinitionIndex)->GetStaticField(0xA180);
	}
	::Struct_2_F0CFA50094D8FF32 Field_2_0; // 0x10
	::Struct_2_172EDDF213DEFCC4 Field_2_1; // 0x60
	::Struct_2_E521CB413C09680F Field_2_2; // 0x90

	::System::Void _ctor(::Struct_2_F0CFA50094D8FF32 a1, ::Struct_2_172EDDF213DEFCC4 a2, ::Struct_2_E521CB413C09680F a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F0CFA50094D8FF32, ::Struct_2_172EDDF213DEFCC4, ::Struct_2_E521CB413C09680F))((::PBYTE)hIl2Cpp + STRUCT_2_ACD0EF80A5330786__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_ACD0EF80A5330786__CCTOR_OFFSET))();
	}

	/*
	::System::Single Method_2_5394145894BDC459(::Struct_2_D0A3658446FCD9A2 a1, ::UnityEngine::Animations::AnimationStream a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_D0A3658446FCD9A2, ::UnityEngine::Animations::AnimationStream, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_ACD0EF80A5330786_METHOD_2_5394145894BDC459_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ACD0EF80A5330786_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}
};
