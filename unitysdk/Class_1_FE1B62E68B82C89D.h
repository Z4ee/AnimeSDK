#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C58549E83E2A95B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE1B62E68B82C89D_CLEAR_OFFSET UNITYSDK_OFFSET(0x19529870)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_0B9393FF4819E623_OFFSET UNITYSDK_OFFSET(0x1952A6A0)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_340B09B8101954D0_OFFSET UNITYSDK_OFFSET(0x1952AAC0)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_66456C92217FE904_OFFSET UNITYSDK_OFFSET(0x19529A70)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_7BD404790CD546FB_OFFSET UNITYSDK_OFFSET(0x1952A280)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_7EABD45AC410AEDE_OFFSET UNITYSDK_OFFSET(0x1952A750)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_887076C3AE781BC5_OFFSET UNITYSDK_OFFSET(0x195298E0)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_A39BC28B44D93F59_OFFSET UNITYSDK_OFFSET(0x19529D40)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x19529520)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_C415407BB0EB376A_OFFSET UNITYSDK_OFFSET(0x19529430)
#define CLASS_1_FE1B62E68B82C89D_METHOD_1_FB5698F55343DDF5_OFFSET UNITYSDK_OFFSET(0x195296E0)
#define CLASS_1_FE1B62E68B82C89D__CTOR_OFFSET UNITYSDK_OFFSET(0x1952AE10)

inline static constexpr unsigned int Class_1_FE1B62E68B82C89D_TypeDefinitionIndex = 69618;

class Class_1_FE1B62E68B82C89D : public ::System::Object
{
public:
	::Class_1_C58549E83E2A95B6* PBOBGOFNGMH; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* HJBHGBIFCLN; // 0x18
	::UnityEngine::Vector3 CGHEFMPCGGJ; // 0x20
	::System::Int32 FCHELGCIIOB; // 0x2C
	::System::Single LOBALJEAOPJ; // 0x30
	::System::Single PIFPMOFLAAJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C415407BB0EB376A(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_C415407BB0EB376A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_CLEAR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FB5698F55343DDF5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_FB5698F55343DDF5_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_887076C3AE781BC5(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_887076C3AE781BC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_66456C92217FE904(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_66456C92217FE904_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7EABD45AC410AEDE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_7EABD45AC410AEDE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0B9393FF4819E623(::RPG::Client::TrackCameraOverrideWayPointType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackCameraOverrideWayPointType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_0B9393FF4819E623_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A39BC28B44D93F59(::System::Boolean& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_A39BC28B44D93F59_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_7BD404790CD546FB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single& a4, ::System::Single& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_7BD404790CD546FB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_340B09B8101954D0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE1B62E68B82C89D_METHOD_1_340B09B8101954D0_OFFSET))(this, a1, a2, a3, a4);
	}
};
