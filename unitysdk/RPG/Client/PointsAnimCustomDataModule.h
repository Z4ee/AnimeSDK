#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2199FC36CD2C2562;
namespace RPG::Client { class PointsAnimCustomDataModule_PropertyVector; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_281DBD7C0E6D4B19_OFFSET UNITYSDK_OFFSET(0xAD6BBF0)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0xAD6B3C0)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET UNITYSDK_OFFSET(0xAD6C100)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xAD6C090)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xAD6BFD0)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD6C030)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimCustomDataModule_TypeDefinitionIndex = 65113;

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

		::System::Void Method_2_34566E7905D6C48F(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_34566E7905D6C48F_OFFSET))(this, a1);
		}

		::System::Void Method_2_281DBD7C0E6D4B19(::Class_1_2199FC36CD2C2562* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_281DBD7C0E6D4B19_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E9A575D18A0748D9(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_2199FC36CD2C2562* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
		}

		::System::Void Method_2_E2CDB6B22CCEBA97_1(::Class_1_2199FC36CD2C2562* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET))(this, P0);
		}
	};
}
