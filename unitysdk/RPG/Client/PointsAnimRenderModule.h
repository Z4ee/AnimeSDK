#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"

class Class_1_DFBCA3F3CBEF1852;
namespace RPG::Client { class PointsAnimRenderModule_PointsAnimRendererPackage; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_3EF939F2ACADDFEB_OFFSET UNITYSDK_OFFSET(0x19394C40)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_6D74C874E8E4B36A_OFFSET UNITYSDK_OFFSET(0x19394CC0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x19394FC0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x19394BF0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19395080)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimRenderModule_TypeDefinitionIndex = 67469;

	class PointsAnimRenderModule : public ::RPG::Client::EffectPointsAnimModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PointsAnimRenderModule_PointsAnimRendererPackage*>* RendererPackages; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E9A575D18A0748D9(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_2_3EF939F2ACADDFEB(::Class_1_DFBCA3F3CBEF1852* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_3EF939F2ACADDFEB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_6D74C874E8E4B36A(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_METHOD_2_6D74C874E8E4B36A_OFFSET))(this, a1);
		}
	};
}
