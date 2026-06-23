#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21;

#define CLASS_2_0E5C429C68B41BC8_METHOD_2_194440DE55E98E1D_OFFSET UNITYSDK_OFFSET(0x14073640)
#define CLASS_2_0E5C429C68B41BC8_METHOD_2_27B4A2C0C8B555EE_OFFSET UNITYSDK_OFFSET(0x14073630)
#define CLASS_2_0E5C429C68B41BC8_METHOD_2_F740F828685B8FB2_OFFSET UNITYSDK_OFFSET(0x14072FD0)
#define CLASS_2_0E5C429C68B41BC8__CTOR_OFFSET UNITYSDK_OFFSET(0x14072E30)

inline static constexpr unsigned int Class_2_0E5C429C68B41BC8_TypeDefinitionIndex = 52236;

class Class_2_0E5C429C68B41BC8 : public ::Class_1_5BD3EF046502B972
{
public:
	::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::System::Single>* Field_2_1; // 0x20
	::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::UnityEngine::Vector3>* Field_2_0; // 0x28
	::UnityEngine::Vector3 Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x3C

	::System::Void _ctor(::System::Boolean a1, ::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::System::Single>* a2, ::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::System::Single>*, ::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_0E5C429C68B41BC8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UICameraAtom Method_2_F740F828685B8FB2(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_0E5C429C68B41BC8_METHOD_2_F740F828685B8FB2_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::UnityEngine::Vector3>* Method_2_27B4A2C0C8B555EE()
	{
		return ((::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E5C429C68B41BC8_METHOD_2_27B4A2C0C8B555EE_OFFSET))(this);
	}

	::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::System::Single>* Method_2_194440DE55E98E1D()
	{
		return ((::Class_2_0E5C429C68B41BC8_Class_1_4A6F768EBE7DEF21<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E5C429C68B41BC8_METHOD_2_194440DE55E98E1D_OFFSET))(this);
	}
};
