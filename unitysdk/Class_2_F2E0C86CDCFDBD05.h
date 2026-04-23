#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92608A36037A1D69.h"
#include "unitysdk/RPG/Client/UIAdaptionIndentType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x9865C70)
#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9865F50)
#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9865B20)
#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x9865C20)
#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9865BD0)
#define CLASS_2_F2E0C86CDCFDBD05_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x9865B80)
#define CLASS_2_F2E0C86CDCFDBD05__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9865AB0)
#define CLASS_2_F2E0C86CDCFDBD05__CTOR_OFFSET UNITYSDK_OFFSET(0x9865A90)

inline static constexpr unsigned int Class_2_F2E0C86CDCFDBD05_TypeDefinitionIndex = 55426;

class Class_2_F2E0C86CDCFDBD05 : public ::Class_1_92608A36037A1D69
{
public:
	::System::Single Field_2_1; // 0x30
	::System::Single Field_2_8; // 0x34
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39
	::System::Single Field_2_7; // 0x3C
	::System::Int32 Field_2_2; // 0x40
	::System::Single Field_2_3; // 0x44
	::System::Single Field_2_4; // 0x48
	::RPG::Client::UIAdaptionIndentType Field_2_0; // 0x4C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E0C86CDCFDBD05_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
