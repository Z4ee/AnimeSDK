#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"

class Class_1_2199FC36CD2C2562;
namespace RPG::Client { class PointsAnimRenderModule_PointsAnimRendererPackage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_3EF939F2ACADDFEB_OFFSET UNITYSDK_OFFSET(0xAD6C270)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_6D74C874E8E4B36A_OFFSET UNITYSDK_OFFSET(0xAD6C2F0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET UNITYSDK_OFFSET(0xAD6C970)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xAD6C900)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xAD6C620)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xAD6C220)
#define RPG_CLIENT_POINTSANIMRENDERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD6C6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimRenderModule_TypeDefinitionIndex = 65117;

	class PointsAnimRenderModule : public ::RPG::Client::EffectPointsAnimModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PointsAnimRenderModule_PointsAnimRendererPackage*>* RendererPackages; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E9A575D18A0748D9(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_3EF939F2ACADDFEB(::Class_1_2199FC36CD2C2562* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_3EF939F2ACADDFEB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_6D74C874E8E4B36A(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_6D74C874E8E4B36A_OFFSET))(this, a1);
		}

		::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_2199FC36CD2C2562* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
		}

		::System::Void Method_2_E2CDB6B22CCEBA97_1(::Class_1_2199FC36CD2C2562* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET))(this, P0);
		}
	};
}
