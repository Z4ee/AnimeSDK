#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_7EF3ABD6A4B8C243_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x155EE340)
#define CLASS_2_7EF3ABD6A4B8C243_METHOD_2_4B475ED1269CF0A2_OFFSET UNITYSDK_OFFSET(0x155EE1C0)
#define CLASS_2_7EF3ABD6A4B8C243_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155EE3D0)
#define CLASS_2_7EF3ABD6A4B8C243__CTOR_OFFSET UNITYSDK_OFFSET(0x155EE3C0)

inline static constexpr unsigned int Class_2_7EF3ABD6A4B8C243_TypeDefinitionIndex = 47680;

class Class_2_7EF3ABD6A4B8C243 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B475ED1269CF0A2(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_METHOD_2_4B475ED1269CF0A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
