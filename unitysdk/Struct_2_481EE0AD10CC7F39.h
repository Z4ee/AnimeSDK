#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_D0B450E6AFA69361;
namespace UnityEngine { class Transform; }

#define STRUCT_2_481EE0AD10CC7F39_METHOD_2_3E578B2EAADAE1DB_OFFSET UNITYSDK_OFFSET(0x780F40)
#define STRUCT_2_481EE0AD10CC7F39_METHOD_2_7F1AFA8B9AD6D86B_OFFSET UNITYSDK_OFFSET(0x6E23F0)
#define STRUCT_2_481EE0AD10CC7F39_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x780EA0)
#define STRUCT_2_481EE0AD10CC7F39_METHOD_2_D1AA082DEC215AEF_OFFSET UNITYSDK_OFFSET(0x780F50)

inline static constexpr unsigned int Struct_2_481EE0AD10CC7F39_TypeDefinitionIndex = 47645;

struct alignas(8) Struct_2_481EE0AD10CC7F39
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	/*
	::UnityEngine::Quaternion Method_2_7F1AFA8B9AD6D86B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_METHOD_2_7F1AFA8B9AD6D86B_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_3E578B2EAADAE1DB(::Class_2_D0B450E6AFA69361* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D0B450E6AFA69361*))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_METHOD_2_3E578B2EAADAE1DB_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_D1AA082DEC215AEF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_METHOD_2_D1AA082DEC215AEF_OFFSET))(this);
	}
	*/
};
