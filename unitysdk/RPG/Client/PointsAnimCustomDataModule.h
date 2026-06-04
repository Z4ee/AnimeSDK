#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_DFBCA3F3CBEF1852;
namespace RPG::Client { class PointsAnimCustomDataModule_PropertyVector; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0xC4AC880)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_492F60696E500917_OFFSET UNITYSDK_OFFSET(0xC4ACFF0)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_8CD1A6D1096A6CB7_1_OFFSET UNITYSDK_OFFSET(0xC4AD460)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xC4AD400)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC4AD340)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4AD3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimCustomDataModule_TypeDefinitionIndex = 66040;

	class PointsAnimCustomDataModule : public ::RPG::Client::EffectPointsAnimModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PointsAnimCustomDataModule_PropertyVector*>* Properties; // 0x18
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _InitialValues; // 0x20
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _CurrentValues; // 0x28
		::Il2CppArray<::System::Int32>* _PropertyNameIDs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_34566E7905D6C48F(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_34566E7905D6C48F_OFFSET))(this, a1);
		}

		::System::Void Method_2_492F60696E500917(::Class_1_DFBCA3F3CBEF1852* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_492F60696E500917_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E9A575D18A0748D9(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
		}

		::System::Void Method_2_8CD1A6D1096A6CB7_1(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_8CD1A6D1096A6CB7_1_OFFSET))(this, a1);
		}
	};
}
