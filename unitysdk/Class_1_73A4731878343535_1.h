#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_73A4731878343535_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F32620)
#define CLASS_1_73A4731878343535_1_METHOD_1_31BFEFFA6EC0F3FE_OFFSET UNITYSDK_OFFSET(0x18F32860)
#define CLASS_1_73A4731878343535_1_METHOD_1_45E0FAD92C78B6E2_OFFSET UNITYSDK_OFFSET(0x18F329A0)
#define CLASS_1_73A4731878343535_1_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x18F327B0)
#define CLASS_1_73A4731878343535_1_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x18F32660)
#define CLASS_1_73A4731878343535_1_METHOD_1_F54DE9676CF851A4_OFFSET UNITYSDK_OFFSET(0x18F326F0)
#define CLASS_1_73A4731878343535_1_METHOD_1_F9FCE3257A591892_OFFSET UNITYSDK_OFFSET(0x18F32950)
#define CLASS_1_73A4731878343535_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F32E00)

inline static constexpr unsigned int Class_1_73A4731878343535_1_TypeDefinitionIndex = 51170;

class Class_1_73A4731878343535_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_F54DE9676CF851A4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_F54DE9676CF851A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_31BFEFFA6EC0F3FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_31BFEFFA6EC0F3FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F9FCE3257A591892(::RPG::GameCore::AIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIStatus))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_F9FCE3257A591892_OFFSET))(this, a1);
	}

	::System::String* Method_1_45E0FAD92C78B6E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_45E0FAD92C78B6E2_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73A4731878343535_1_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}
};
