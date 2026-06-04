#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_F4E84B8AE30D9675.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A681926816BDB49A_METHOD_1_3173EE9CD5C2B951_OFFSET UNITYSDK_OFFSET(0xA784100)
#define CLASS_1_A681926816BDB49A_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0xA783E10)
#define CLASS_1_A681926816BDB49A_METHOD_1_8B12BA37CDB5EBA6_OFFSET UNITYSDK_OFFSET(0xA7843F0)
#define CLASS_1_A681926816BDB49A_METHOD_1_AF562B1F47F1F50C_OFFSET UNITYSDK_OFFSET(0xA783FD0)
#define CLASS_1_A681926816BDB49A_METHOD_1_E350CF7904B56716_OFFSET UNITYSDK_OFFSET(0xA783E80)
#define CLASS_1_A681926816BDB49A__CTOR_OFFSET UNITYSDK_OFFSET(0xA7844C0)

inline static constexpr unsigned int Class_1_A681926816BDB49A_TypeDefinitionIndex = 55194;

class Class_1_A681926816BDB49A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Single Method_1_E350CF7904B56716(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A_METHOD_1_E350CF7904B56716_OFFSET))(a1, a2);
	}

	static ::RPG::MQuaternion Method_1_AF562B1F47F1F50C(::System::Single a1)
	{
		return ((::RPG::MQuaternion(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A_METHOD_1_AF562B1F47F1F50C_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_3173EE9CD5C2B951(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A_METHOD_1_3173EE9CD5C2B951_OFFSET))(a1);
	}

	static ::System::Void Method_1_8B12BA37CDB5EBA6(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::Struct_2_F4E84B8AE30D9675& a3)
	{
		return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::Struct_2_F4E84B8AE30D9675&))((::PBYTE)hIl2Cpp + CLASS_1_A681926816BDB49A_METHOD_1_8B12BA37CDB5EBA6_OFFSET))(a1, a2, a3);
	}
};
