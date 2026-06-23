#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1910126201EC593B;
class Class_2_208CC9941471731A_508;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27_METHOD_1_4EAC49B2567EAA97_OFFSET UNITYSDK_OFFSET(0x1790A970)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27_METHOD_1_58D0CBD885BBA17E_OFFSET UNITYSDK_OFFSET(0x1790AF90)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1790A960)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_BCA6A55E83A9AB50_27_TypeDefinitionIndex = 82196;

class Class_1_8B550A61FC9DDA82_Class_1_BCA6A55E83A9AB50_27 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1910126201EC593B*>* Method_1_4EAC49B2567EAA97()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1910126201EC593B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27_METHOD_1_4EAC49B2567EAA97_OFFSET))(this);
	}

	::System::Boolean Method_1_58D0CBD885BBA17E(::Class_2_208CC9941471731A_508* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_508*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_27_METHOD_1_58D0CBD885BBA17E_OFFSET))(this, a1);
	}
};
