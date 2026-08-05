#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1DB39C120B52CB5D_METHOD_2_0541B466D90A7C72_OFFSET UNITYSDK_OFFSET(0x177406B0)
#define CLASS_2_1DB39C120B52CB5D_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17740880)
#define CLASS_2_1DB39C120B52CB5D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17740950)
#define CLASS_2_1DB39C120B52CB5D__CTOR_OFFSET UNITYSDK_OFFSET(0x17740940)

inline static constexpr unsigned int Class_2_1DB39C120B52CB5D_TypeDefinitionIndex = 55593;

class Class_2_1DB39C120B52CB5D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1*>* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0541B466D90A7C72(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_0541B466D90A7C72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
