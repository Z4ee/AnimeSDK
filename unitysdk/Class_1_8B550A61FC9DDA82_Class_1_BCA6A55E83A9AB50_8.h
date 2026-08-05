#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1910126201EC593B;
class Class_2_208CC9941471731A_154;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8_METHOD_1_4EAC49B2567EAA97_OFFSET UNITYSDK_OFFSET(0x165CF3A0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8_METHOD_1_58D0CBD885BBA17E_OFFSET UNITYSDK_OFFSET(0x165CF9C0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8__CTOR_OFFSET UNITYSDK_OFFSET(0x165CF390)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_BCA6A55E83A9AB50_8_TypeDefinitionIndex = 50195;

class Class_1_8B550A61FC9DDA82_Class_1_BCA6A55E83A9AB50_8 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1910126201EC593B*>* Method_1_4EAC49B2567EAA97()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1910126201EC593B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8_METHOD_1_4EAC49B2567EAA97_OFFSET))(this);
	}

	::System::Boolean Method_1_58D0CBD885BBA17E(::Class_2_208CC9941471731A_154* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_154*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_BCA6A55E83A9AB50_8_METHOD_1_58D0CBD885BBA17E_OFFSET))(this, a1);
	}
};
