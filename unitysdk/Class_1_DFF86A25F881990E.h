#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_DFF86A25F881990E_METHOD_1_C45EDD15FF4CBC41_OFFSET UNITYSDK_OFFSET(0x18252700)
#define CLASS_1_DFF86A25F881990E__CTOR_OFFSET UNITYSDK_OFFSET(0x182529B0)

inline static constexpr unsigned int Class_1_DFF86A25F881990E_TypeDefinitionIndex = 13432;

class Class_1_DFF86A25F881990E : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_3; // 0x10
	::RPG::Client::TextID Field_1_4; // 0x18
	::System::UInt32 Field_1_0; // 0x28
	::RPG::GameCore::FixPoint Field_1_2; // 0x30
	::RPG::GameCore::FixPoint Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF86A25F881990E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C45EDD15FF4CBC41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DFF86A25F881990E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DFF86A25F881990E*&))((::PBYTE)hIl2Cpp + CLASS_1_DFF86A25F881990E_METHOD_1_C45EDD15FF4CBC41_OFFSET))(a1, a2);
	}
};
