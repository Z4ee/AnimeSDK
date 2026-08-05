#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_ECA46D1BEB15682A;
class Class_2_07FCB21E9E339507;
class Class_2_17AB95A5B76911C6;
class Class_2_3400D8A4AB01525E;
class Class_2_AE7052B004772AF6;
class Class_2_F7EEAF2D0F17FC87;
class Class_4_4BA0DF1EA13B94EC;

#define CLASS_1_4DEA6EA9ED911F25_METHOD_1_A0ECBFEA2D1D05B9_OFFSET UNITYSDK_OFFSET(0x1D2B73D0)
#define CLASS_1_4DEA6EA9ED911F25_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D2B75B0)
#define CLASS_1_4DEA6EA9ED911F25_METHOD_1_E552BA6F26532E71_OFFSET UNITYSDK_OFFSET(0x1D2B74B0)
#define CLASS_1_4DEA6EA9ED911F25__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B73C0)

inline static constexpr unsigned int Class_1_4DEA6EA9ED911F25_TypeDefinitionIndex = 91948;

class Class_1_4DEA6EA9ED911F25 : public ::System::Object
{
public:
	::Class_2_AE7052B004772AF6* Field_1_7; // 0x10
	::Class_2_F7EEAF2D0F17FC87* Field_1_0; // 0x18
	::Class_2_17AB95A5B76911C6* Field_1_6; // 0x20
	::Class_2_07FCB21E9E339507* Field_1_4; // 0x28
	::Class_2_3400D8A4AB01525E* Field_1_5; // 0x30

	::System::Void _ctor(::Class_4_4BA0DF1EA13B94EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_4BA0DF1EA13B94EC*))((::PBYTE)hIl2Cpp + CLASS_1_4DEA6EA9ED911F25__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0ECBFEA2D1D05B9(::Class_4_4BA0DF1EA13B94EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_4BA0DF1EA13B94EC*))((::PBYTE)hIl2Cpp + CLASS_1_4DEA6EA9ED911F25_METHOD_1_A0ECBFEA2D1D05B9_OFFSET))(this, a1);
	}

	::Class_1_ECA46D1BEB15682A* Method_1_E552BA6F26532E71(::MoleMole::Arcade::BallsRace::BrEntityType a1)
	{
		return ((::Class_1_ECA46D1BEB15682A*(*)(::PVOID, ::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + CLASS_1_4DEA6EA9ED911F25_METHOD_1_E552BA6F26532E71_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DEA6EA9ED911F25_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
