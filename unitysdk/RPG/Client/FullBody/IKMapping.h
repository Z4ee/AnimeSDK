#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_1C648BC3BB33C550_OFFSET UNITYSDK_OFFSET(0x1937B960)
#define RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_73264D810B7A8424_OFFSET UNITYSDK_OFFSET(0x1937B9B0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_A980FB7965D4A13F_OFFSET UNITYSDK_OFFSET(0x1937B910)
#define RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0x1937BAE0)
#define RPG_CLIENT_FULLBODY_IKMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1937BC80)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKMapping_TypeDefinitionIndex = 74149;

	class IKMapping : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A980FB7965D4A13F(::RPG::Client::FullBody::IKSolver* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_A980FB7965D4A13F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1C648BC3BB33C550(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_1C648BC3BB33C550_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_73264D810B7A8424(::UnityEngine::Transform* a1, ::RPG::Client::FullBody::IKSolver* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FullBody::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_73264D810B7A8424_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_METHOD_1_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
		}
	};
}
