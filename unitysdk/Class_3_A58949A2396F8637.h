#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_A58949A2396F8637_METHOD_3_545BE565886346CF_OFFSET UNITYSDK_OFFSET(0x17821010)
#define CLASS_3_A58949A2396F8637_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17821AB0)
#define CLASS_3_A58949A2396F8637_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x17821B90)
#define CLASS_3_A58949A2396F8637_METHOD_3_CEE6ECEECA54D21A_OFFSET UNITYSDK_OFFSET(0x17820F50)
#define CLASS_3_A58949A2396F8637__CTOR_OFFSET UNITYSDK_OFFSET(0x17821B70)

inline static constexpr unsigned int Class_3_A58949A2396F8637_TypeDefinitionIndex = 86089;

class Class_3_A58949A2396F8637 : public ::Class_2_C6AB2643BC630D64<::Class_3_A58949A2396F8637*>
{
public:
	::System::String* Field_3_7; // 0x10
	::MoleMole::EntityHandle Field_3_0; // 0x18
	::UnityEngine::Vector3 Field_3_6; // 0x28
	::UnityEngine::Vector3 Field_3_4; // 0x34
	::System::Single Field_3_5; // 0x40
	::System::Boolean Field_3_11; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A58949A2396F8637__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEE6ECEECA54D21A(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A58949A2396F8637_METHOD_3_CEE6ECEECA54D21A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_545BE565886346CF(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A58949A2396F8637_METHOD_3_545BE565886346CF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A58949A2396F8637_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A58949A2396F8637_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
