#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_D0B450E6AFA69361;
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_198E3B0D75E34EBD_OFFSET UNITYSDK_OFFSET(0xC94D870)
#define STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_3E578B2EAADAE1DB_OFFSET UNITYSDK_OFFSET(0x511B70)
#define STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_7F1AFA8B9AD6D86B_OFFSET UNITYSDK_OFFSET(0x511CD0)
#define STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x511B80)
#define STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x511B20)

inline static constexpr unsigned int Struct_2_481EE0AD10CC7F39_1_TypeDefinitionIndex = 79718;

struct alignas(8) Struct_2_481EE0AD10CC7F39_1
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	static ::MoleMole::Cameras::CameraDataAccessor* Method_2_198E3B0D75E34EBD()
	{
		return ((::MoleMole::Cameras::CameraDataAccessor*(*)())((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_198E3B0D75E34EBD_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_3E578B2EAADAE1DB(::Class_2_D0B450E6AFA69361* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D0B450E6AFA69361*))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_3E578B2EAADAE1DB_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_7F1AFA8B9AD6D86B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_481EE0AD10CC7F39_1_METHOD_2_7F1AFA8B9AD6D86B_OFFSET))(this);
	}
	*/
};
